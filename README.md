# classic-ciphers
We will develop some [classical ciphers](https://en.wikipedia.org/wiki/Classical_cipher) in C. Once the files have been downloaded the code can be executed using in sequence the following commands:
- `gcc -<programName>.c` wich will compile the file `<programName.c>` and produce the output file `a.out`
- `./a` wich will execute the code obtained in the previous point.

It is possible to try the code online:
- `cesare.c`: https://onlinegdb.com/gBSX6kuJ0 (insert the message and then the key, an integer $k$, to obtain the ciphertext, then given the ciphertext insert $-k$ to decipher it).
- `vigenere.c`: https://onlinegdb.com/Dx-lPhhhW (just run it and it will encrypt a predefined message `un matematico trasforma caffe in teoremi` with predefined key `ciao`, and also automatically decrpyt it).

Be careful since these ciphers are not secure! For example many well known attacks based on frequency analysis are known. 

### What's in here?
Here you can find the following classical ciphers:
- `cesare.c` which implements a generalization of the Cesar's cipher
- `vigenere.c` which implements the Vigenere cipher 
