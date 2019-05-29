# The Protocol
This is the definition of the Protocol between
the PC and Arduino through Serial

## Packets
A packet is a stream of bytes send
in one pice and interpreted
<table>
  <tr>
    <td>
      Type
    </td>
    <td>
      Size
    </td>
    <td>
      Payload
    </td>
  </tr>
</table>
  

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
<table>
  <tr>
    <td>
      Type
    </td>
    <td>
     Size 
    </td>
    <td>
      Payload
    </td>
  </tr>
  <tr>
    <td>
    1
    </td>
    <td>
    1 
    </td>
    <td>
    check type
    </td>
  </tr>
</table>
The check type is another 1B figure
and each check has another check type
pattern.

### Commands
Fields:
<table>
  <tr>
    <td>
    Type
    </td>
    <td>
    Size
    </td>
    <td>
    Payload
    </td>
  </tr>
  <tr>
    <td>
    2
    </td>
    <td>
    8 
    </td>
    <td>
    motor ; time
    </td>
  </tr>
</table>
The Payload looks like this:
<table>
  <tr>
    <td>
      motor
    </td> 
    <td>
      time
    </td>
  </tr>
  <tr>
    <td>
      4B (uint)
    </td>
    <td>
      4B (uint)
    </td>
  </tr>
</table>
The `motor` fields says which
motor should be power for
a specific `time`, a uint as well.

### Requests
There is, I think, only
one kind of this packet,
a request for new commands
by the Arduino to the PC.
<table>
  <tr>
    Type
    Size 
    Payload
  </tr>
  <tr>
    <td>
      3
    </td>
    <td>
      1
    </td>
    <td>
      Number of Commands
    </td>
  </tr>
</table>
The Number of Commands is
the number of Commands that
the PC shall send to
the Arduino back.
