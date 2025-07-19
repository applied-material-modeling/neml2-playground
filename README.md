# Playground for NEML2 tutorials

Cloning this repository, with submodules, should set you up for working through the NEML2 tutorials.

There are a few ways you could setup the requirements for compiling the library and the tutorial files.

## Set up the environment using Conda

```
conda create -n neml2
conda activate neml2-playground
conda install python==3.12 cmake ninja clang-format

git clone --recursive https://github.com/applied-material-modeling/neml2-playground
cd neml2-playground
pip install -r requirements.txt
```

## Build the playground

```
cmake -GNinja .
cmake --build .
```

This will compile the code in `main.cxx` (and link it with NEML2) and produce an executable named `playground` which can be executed using

```
./playground
```
