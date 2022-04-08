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

</br>

### 3. Make sure to place the `.clang-format` file in the root folder

If you use `neovim` LSP (`clangd` LSP server) and you want to customize your
formatting style, then you have to place a `.clang-format` file at the project
root folder. `vim.lsp.buf.formatting()` will load and use it automatic.
Otherwise, you got no way to contorl the formatting style!!!

```json
#
# clang-format --style="{BasedOnStyle: google, IndentWidth: 4, ColumnLimit: 60}"
#
BasedOnStyle: GOOGLE
IndentWidth: 4
ColumnLimit: 60
```

