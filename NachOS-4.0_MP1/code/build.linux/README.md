# NachOS 4.0_MP1 編譯與執行說明

## 環境
目前於 **Windows WSL Ubuntu 22.04.5 LTS** 環境下進行。

## 推薦工具
```bash
sudo apt install tree
```
## 必須安裝套件
```bash
sudo apt install gcc-multilib g++-multilib libc6-dev-i386 \
lib32gcc-11-dev lib32stdc++-11-dev libstdc++-11-dev:i386 \
libgcc-11-dev:i386 linux-libc-dev:i386 \
flex bison m4 libgmp-dev libmpfr-dev libmpc-dev 
```
## 建立 Makefile.dep, 編譯, 測試
```bash
cd NachOS-4.0_MP1/code/build.linux
sudo apt install xutils-dev ed
cp makedep Makefile.dep
make clean && make #編譯
./nachos -e ../test/halt #測試，如果有錯誤，到 test 資料夾確認有編譯 halt.c
```


