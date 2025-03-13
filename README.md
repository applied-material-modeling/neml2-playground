# Playground for NEML2 tutorials

Cloning this repository, with submodules, should set you up for working through the NEML2 tutorials.

There are a few ways you could setup the requirements for compiling the library and the tutorial files.

## conda

```
conda create -n neml2-playground python==3.11
conda activate neml2-playground
git clone https://github.com/applied-material-modeling/neml2-playground
cd neml2-playground
git submodule init
git submodule update
conda install cmake ninja
pip install -r neml2/requirements.txt
code .
```