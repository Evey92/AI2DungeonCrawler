#include "pch.h"
#include "UnitType.h"
#include <sstream>

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

  //sql = "SELECT * from UnitType where id = " << idType << ";";

  sqlite3_close(db);
}