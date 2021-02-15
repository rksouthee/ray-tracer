# ray-tracer

A basic ray tracer.

I generate an image in the [Netbpm](https://en.wikipedia.org/wiki/Netpbm) format.

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
