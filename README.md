## VCPKG and CMake for dependencies management
This example project is based on [this tutorial](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-powershell) using powershell.

To setup your project with vcpkg (installed beforehand):
- First ensure your vcpkg-related environment variables are correctly setup:

```$env:VCPKG_ROOT = "C:\path\to\vcpkg"```
```$env:PATH = "$env:VCPKG_ROOT;$env:PATH"```

- In your project directory, initialize your vcpkg environment:

```vcpkg new --application```

- Add your dependencies, for instance opencv4:

```vcpkg add port opencv4```

After this step, your dependencies should appear in the vcpkg.json file. 

- Setup your cmake file according to the needs of your project.

- Create a ```CMakePresets.json``` file in your project, that specifies among other things the ```CMAKE_TOOLCHAIN_FILE``` variable, which allows CMake to recognize C++ libraries provided by vcpkg.

- Configure the build:
```cmake --preset=default```

- And finally build your project using:
```cmake --build build```