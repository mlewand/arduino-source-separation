# Arduino Source Separation

This is an example how to split your logic into a `.h` and `.cpp` files in subdirectories, and how to include them to your `.ino` file. This will help you to keep your code more organized. 🗃

## Reason

I faced some funny compilation (linking) errors, despite having a correct file structure. Errors like:

```
sketch\testFileSeparation.ino.cpp.o:(.text.setup+0xc): undefined reference to `Dummy::Dummy()'

sketch\testFileSeparation.ino.cpp.o: In function `HardwareSerial::begin(unsigned long)':
```

As it turned out in one Arduino IDE versions there was a change that only `src/*` subdirectories are scanned for `.cpp` files. There was [a live-saving post on Arduino forums](https://forum.arduino.cc/index.php?topic=445230.msg3064170#msg3064170) that nailed the issue, so big thanks to **pert**. 👌