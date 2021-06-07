# Testing e debugging di errori di memoria in C e C++
## Link veloci
- [Presentazione in PDF](Presentazione.pdf)
- [Sorgente della presentazione (in Markdown da compilare usando `marp`)](Presentazione.md)

## Descrizione
In questo repo trovate tutto il materiale della mia presentazione fatta per il corso di Verifica e Convalida 2021. 

Per convertire il file Markdown in PDF se avete installato node.js potete usare:

    npx @marp-team/marp-cli Presentazione.md --pdf

## References

- https://github.com/google/sanitizers/wiki/AddressSanitizer
- https://valgrind.org/info/tools.html#memcheck
- [AddressSanitizer: A Fast Address Sanity Checker, 2012 USENIX ATC, Konstantin Serebryany and Derek Bruening and Alexander Potapenko and Dmitriy Vyukov](https://research.google/pubs/pub37752/)
- [How to Shadow Every Byte of Memory Used by a Program, ACM SIGPLAN/SIGOPS VEE 2007, Nicholas Nethercote and Julian Seward](https://valgrind.org/docs/shadow-memory2007.pdf) 
- https://www.valgrind.org/docs/manual/manual-core.html
- [Memory Tagging and how it improves C/C++ memory safety, Kostya Serebryany, Evgenii Stepanov, Aleksey Shlyapnikov, Vlad Tsyrklevich, Dmitry Vyukov](https://arxiv.org/pdf/1802.09517.pdf)
