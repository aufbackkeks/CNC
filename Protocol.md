# The Protocol
This is the definition of the Protocol between
the PC and Arduino through Serial

## Packets
A packet is a stream of bytes send
in one pice and interpreted
|   |   |   |
|---|---|---|
| Type | Size | Payload |

Fields:
- Type (1B), the type of the packet
- Size (4B), the size of the Payload field
- Payload (SizeB), the payload of the packet

## Types
There are three types:
1. Requests
2. Commands
3. Checks

Each type is associated with one byte
pattern to send in the Type field.

### Checks
Fields:
|   |   |   |
|---|---|---|
| Type | Size | Payload |
| 1 | 1 | check type |
The check type is another 1B figure
and each check has another check type
pattern.

### Commands
Fields:
|   |   |   |
|---|---|---|
| Type | Size | Payload |
| 2 | 8 | motor ; time |
The Payload looks like this:
|   |   |
|---|---|
| motor | time |
| uint | uint |
The `motor` fields says which
motor should be power for
a specific `time`, a uint as well.

### Requests
There is, I think, only
one kind of this packet,
a request for new commands
by the Arduino to the PC.
|   |   |   |
|---|---|---|
| Type | Size | Payload |
| 3 | 1 | Number of Commands |
The Number of Commands is
the number of Commands that
the PC shall send to
the Arduino back.
