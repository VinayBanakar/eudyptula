zcat /proc/config.gz > .config
make olddefconfig
make -j2
make modules_install

## Now copy kernel to /boot
cp -v arch/x86_64/boot/bzImage /boot/vmlinuz-linux57

## then make mkinitcpio preset file
## Follow the rest in preset file
