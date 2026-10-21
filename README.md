# os161

## Structure

- Main: Base version with compiled tools
- Proj2: Complete project 2 files
- Proj3: Complete project 3 files
- Proj4: Complete project 4 files

**Each project does not depend upon the previous project.**
  
Use this for new project:
`git switch -c proj4 main` 

## Build Instructions
``` 
export PATH=~/cs161/bin:$PATH
cd ~/cs161/os161/kern/compile/ASST1
make depend
make
make install
cd ~/cs161/root && ../sys161-1.14/build-sys161/sys161 kernel
```