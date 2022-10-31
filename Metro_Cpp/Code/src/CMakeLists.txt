# Permet d'avoir accès à la macro CHECK_INCLUDE_FILE_CXX
include(CheckIncludeFileCXX)

# Vérifie si iomanip est disponible
# la variable IOMANIP indique si oui ou non la recherche a été fructueuse 
CHECK_INCLUDE_FILE_CXX(iomanip IOMANIP)

# Test de la valeur de IOMANIP
if(NOT IOMANIP)
    message("====> No <iomanip> found")
endif()

# Vérifie si fstream est disponible
# la variable FSTREAM indique si oui ou non la recherche a été fructueuse 
CHECK_INCLUDE_FILE_CXX(fstream FSTREAM)

# Test de la valeur de FSTREAM
if(NOT FSTREAM)
    message("====> No <fstream> found")
endif()

# Vérifie si sstream est disponible
# la variable SSTREAM indique si oui ou non la recherche a été fructueuse 
CHECK_INCLUDE_FILE_CXX(sstream SSTREAM)

# Test de la valeur de SSTREAM
if(NOT SSTREAM)
    message("====> No <sstream> found")
endif()

# Vérifie si algorithm est disponible
# la variable ALGORITHM indique si oui ou non la recherche a été fructueuse 
CHECK_INCLUDE_FILE_CXX(algorithm ALGORITHM)

# Test de la valeur de ALGORITHM
if(NOT ALGORITHM)
    message("====> No <algorithm> found")
endif()

# Vérifie si vector est disponible
# la variable VECTOR indique si oui ou non la recherche a été fructueuse 
CHECK_INCLUDE_FILE_CXX(vector VECTOR)

# Test de la valeur de VECTOR
if(NOT VECTOR)
    message("====> No <vector> found")
endif()
