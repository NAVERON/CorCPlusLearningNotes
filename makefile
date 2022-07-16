
# precheck  
tmp : 
	# copy source file , just for test 
	cp config/data.txt build/tmp.txt 

# compile  
compile : # 只是执行一个任务, 如果需要别名的编译文件 需要设置为结果文件名  
	gcc -c src/memory.c -o build/memory.o 
	gcc -c src/advance.c -o build/advance.o 
	gcc -c src/define.c -o build/define.o 
	gcc -c src/first.c -o build/first.o 
	gcc -c src/mutioption.c -o build/mutioption.o 


# link  
link :  # 如果有依赖关系 需要在这里写依赖的任务文件名  
	gcc build/memory.o -o bin/memory 
	gcc build/advance.o -o bin/advance.exe 
	gcc build/first.o -o bin/first.exe 
	gcc build/define.o -o bin/define 

# clean  
clean : 
	echo "hello world" 
	rm build/*.o 

all : 
	make tmp 
	make compile 
	make link 
	make clean 




