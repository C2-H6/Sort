cmake_minimum_required(VERSION 3.12)
project(TriAlgo)

# Configurer le compilateur pour utiliser les options du standard C11
set(CMAKE_C_STANDARD 11)

# Ajouter le répertoire des sources à la liste des répertoires de recherche
# pour les fichiers d'en-tête
include_directories(src)

# Ajouter les fichiers sources à une variable
file(GLOB SOURCES "src/*.c")

# Créer l'exécutable à partir des fichiers sources
add_executable(TriAlgo ${SOURCES})
