#include "pch.h"
#include "UnitType.h"
#include <sstream>

UnitType::UnitType()
{
}


UnitType::~UnitType()
{
}

static UnitType*
callback(void *data, int argc, char **argv, char **azColName) {
  int i;
  fprintf(stderr, "%s: ", (const char*)data);

  for (i = 0; i < argc; i++) {
    printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
  }

  printf("\n");
  return 0;
}

void
UnitType::Load(int idType) {
  sqlite3* db;
  int rc;
  std::stringstream sql;
  rc = sqlite3_open("DCDatabase.db", &db);

  if (rc) {
    fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    
  }
  else {
    fprintf(stderr, "Opened database successfully\n");
  }

  sql = "SELECT * from UnitType where id = " << idType << ";";

  sqlite3_close(db);
}
