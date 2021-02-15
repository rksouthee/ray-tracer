# ray-tracer

I'm using this project to learn some 3D math and use multithreading and
vectorisation to improve performance. Images are generated using the
[Netbpm](https://en.wikipedia.org/wiki/Netpbm) format.

## Building

Requires CMake and a C++ compiler

```bat
ray-tracer>md build
ray-tracer>cmake-gui .
ray-tracer>rem configure and generate
ray-tracer>cmake --build build
```

## Running

```bat
ray-tracer>ray > image.ppm
```

The result image `image.ppm` can then be opened by an editor. I used
[OpenSeeIt](http://openseeit.sourceforge.net/).
