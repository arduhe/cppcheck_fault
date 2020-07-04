Small sample project that shows the problem with *pio check*. 

After call of *pio check* cppcheck is started and doesn't terminate properly. It swallows the **complete** available RAM of your computer. You have to kill the process to terminate it.


**WARNING: Don't start pio check in this project from a gui - it's possible that you won't be able to stop it.**
**and you might be forced to reset your computer!**
**Only start it from a shell** 