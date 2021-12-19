Borrowed from [Will Ushers SDL2 Tutorials](http://www.willusher.io/sdl2%20tutorials/2014/03/06/lesson-0-cmake/)

# Dependencies

Xcode (Tested with 6.1.1)

SDL2: `brew install sdl2`

Optionally SDL2_TTF: `brew install sdl2_ttf`

Optionally SDL2_Image: `brew install sdl2_image`

CMake: `brew install cmake`

# Build & compile

`cd build`

`cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ../`

`make`

`make install`

Compiled binary now available in `bin/`
