# Corewar

Projet d'émulation en C où des champions en assembleur s'affrontent dans une arène mémoire partagée

Le projet est composé de :
- L'assembleur (`asm`) pour convertir les fichiers `.s` en bytecode `.cor`
- La machine virtuelle (`corewar`) qui gère les processus et simule le combat

## Build et lancement

```bash
make

# Compiler un champion
./asm/asm champions/fluttershy.s

# Lancer un match (2 à 4 champions)
./corewar/corewar champions/fluttershy.cor champions/abel.cor
```
