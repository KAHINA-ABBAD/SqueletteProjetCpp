cmake_minimum_required(VERSION 3.10)

project(MonProjetCpp)

set(CMAKE_CXX_STANDARD 17)

# Ajouter les répertoires contenant les fichiers sources
include_directories(include)

# Ajouter tous les fichiers source
add_executable(MonProjetCpp src/main.cpp src/MyClass.cpp)

# Si vous avez des bibliothèques externes à lier, vous pouvez les ajouter ici
# target_link_libraries(MonProjetCpp <nom_de_la_bibliotheque>)
