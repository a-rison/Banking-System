output: account.o bank.o bankingSystem.o
	g++-11 bin/bank.o bin/account.o bin/bankingSystem.o -o bin/bankingSystem
bankingSystem.o: bankingSystem.cpp
	g++-11 -c bankingSystem.cpp -o bin/bankingSystem.o
bank.o: bank.cpp
	g++-11 -c bank.cpp -o bin/bank.o
account.o: account.cpp
	g++-11 -c account.cpp -o bin/account.o
clean:
	rm bin/*.o bin/bankingSystem