duktape for Unikraft
===================
This is a port of duktape to Unikraft. You will need newlib 
for it to work, so please ensure you add the following line to the
LIBS variable in the Makefile:

   ...$(UK_LIBS)/newlib:$(UK_LIBS)/duktape...

For now we only support interactive mode. To use it, please make sure
to call duktape_main from your application. Also, please make sure to
allocate enough memory (e.g., 8-16 MBs) for duktpace to run). 

Please refer to the `README.md` as well as the documentation in the `doc/`
subdirectory of the main unikraft repository for further information.
