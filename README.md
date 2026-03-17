## How to compile the code for Python
```bash
%%bash
rm -f _DVCS_xsec.so
# pip install --target swig swig
# export PATH=$PATH:/home/kenjo/jupyter/.venv/bin/swig
# export SWIG_LIB=/home/kenjo/jupyter/dvcs/swig/swig/data/share/swig/4.3.1

export INC=`python -c "import sysconfig; print(sysconfig.get_paths()['include'])"`
swig -c++ -python DVCS_xsec.i
g++ -shared -fPIC -o _DVCS_xsec.so DVCS_xsec_wrap.cxx DVCS_xsec.C `root-config --libs --cflags` -I. -I$INC
```

## DATA
- $Q^2$ dependence of ImH$(\xi,t)$ and ReH($\xi,t)$ extractions
- 3D table of data points, ImH as a function of $(\xi,t)$, same for ReH
	- t-dep dipole function with $m^2$
	- fit surface
