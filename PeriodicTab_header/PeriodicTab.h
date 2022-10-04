int elements(int Entry){
  std::string Nom_Atome;

  switch (Entry) {
    case 1:
      Nom_Atome = "Hydrogen_H";
      break;
    case 2:
      Nom_Atome = "Helium_He";
      break;
    case 3:
      Nom_Atome = "Lithium_Li";
      break;
    case 4:
      Nom_Atome = "Béryllium_Be";
      break;
    case 5:
      Nom_Atome = "Boron_B";
      break;
    case 6:
      Nom_Atome = "Carbon_C";
      break;
    case 7:
      Nom_Atome = "Nitrogen_N";
      break;
    case 8:
      Nom_Atome = "Oxygen_O";
      break;
    case 9:
      Nom_Atome = "Fluorine_F";
      break;
    case 10:
      Nom_Atome = "Neon_Ne";
      break;
    case 11:
      Nom_Atome = "Sodium_Na";
      break;
    case 12:
      Nom_Atome = "Magnesium_Mg";
      break;
    case 13:
      Nom_Atome = "Aluminium_Al";
      break;
    case 14:
      Nom_Atome = "Silicon_Si";
      break;
    case 15:
      Nom_Atome = "Phosphorus_P";
      break;
    case 16:
      Nom_Atome = "Sulfur_S";
      break;
    case 17:
      Nom_Atome = "Chlorine_Cl";
      break;
    case 18:
      Nom_Atome = "Argon_Ar";
      break;
    default:
      Nom_Atome = "Atome non existant ou valeur non reconnue";
  }
  std::cout << "======================================================\n NRéponse: " << Nom_Atome << "\n======================================================\n";

  return 0;
}
