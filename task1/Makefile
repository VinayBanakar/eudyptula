obj-m += helloModule.o
KVERSION = $(shell uname -r)

all:
	make -C /lib/modules/$(KVERSION)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(KVERSION)/build M=$(PWD) clean
test:
	dmesg -C #clears log
	insmod helloModule.ko
	rmmod helloModule.ko
	dmesg
