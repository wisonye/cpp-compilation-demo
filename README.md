# How to config project by using `CMake`

### 1. First time configure

```bash
# Make sure you're in the project root folder

#
# Create and cd into the `build` folder
#
mkdir build && cd build

#
# Generate make files into `build` folder
#
# Generate the `compile_commands.json` for `clangd_extensions` neovim plugin
#
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..

#
# Build the entire project
#
make
```

</br>


### 2. Compile after first configure

```bash
# Build and run
cd build && make && ./demo
```
