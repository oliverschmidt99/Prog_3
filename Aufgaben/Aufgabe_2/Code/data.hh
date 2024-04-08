#ifndef DATA_H
#define DATA_H

#include "lager.hh"
#include <string>

class Get_Artikel : public Artikel {
protected:
  std::string file_name;

public:
  Get_Artikel();
  virtual ~Get_Artikel();
  virtual void open_File();
};

class Output_Artikel : public Get_Artikel {
public:
  void open_File(const std::string file_name);
  void write_file(const std::string &file_name, Artikel artikel_output);
};

#endif