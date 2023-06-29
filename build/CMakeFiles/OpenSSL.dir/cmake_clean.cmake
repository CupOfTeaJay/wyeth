file(REMOVE_RECURSE
  "libOpenSSL.a"
  "libOpenSSL.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/OpenSSL.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
