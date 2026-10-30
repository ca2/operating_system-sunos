# Solaris FFmpeg dependency

The audio resampler and FFmpeg video modules build FFmpeg 6.1.6 from source.
No installed FFmpeg pkg-config packages are needed. The shared libraries and
headers are installed under the same relative storage layout used by Windows:

`../operating_system/storage-solaris/<x64|x86>/<Debug|Release>/third/ffmpeg`

Consumers link imported targets and wait for SDK installation before compiling.
CMake records the SDK library directory in the consumer build RPATH; FFmpeg's
own libraries also use that directory. Keep the SDK installed when running the
build output. Relocatable application packaging is not provided by this helper.

Use a single-configuration generator (Ninja or Unix Makefiles), GCC, bash, GNU
make (`gmake`), and the usual Solaris development tools. Downloads happen at
build time. FFmpeg's upstream SunOS configuration handles Solaris linker flags.
Assembly optimizations requiring NASM are disabled by default.

CMake cache overrides:

- `FFMPEG_INSTALL_DIR`: SDK destination.
- `FFMPEG_VERSION`, `FFMPEG_URL`, `FFMPEG_SHA256`: release/archive and optional hash.
- `FFMPEG_SOURCE_DIR`: pristine local FFmpeg source instead of a download.
- `FFMPEG_BASH`, `FFMPEG_MAKE`, `FFMPEG_JOBS`: build tools and parallelism.
- `FFMPEG_BUILD_PROGRAMS`, `FFMPEG_NETWORK`: both OFF by default.
- `FFMPEG_EXTRA_CONFIGURE_ARGS`: semicolon-separated additional configure options.

The default 6.1 series matches the existing channel-layout consumer APIs.
Changing major versions can require consumer source changes. Do not disable the
five required libraries through extra configure arguments. Debug SDKs retain
symbols and disable optimization. Automatic external-library detection is off.
