#include <stdio.h>
#include <stdlib.h>

#include <memory>
#include <string>

#include "ActionModule.h"
#include "DiskFiles.h"
#include "GameInfo.h"
#include "FileOperation.h"

using std::string;
using std::unique_ptr;

static void Usage(const char *prog_name)
{
  fprintf(stderr, "%s Need No Para!\n",
          prog_name);
  exit(-1);
}

int main(int argc, char *argv[])
{
  if (argc > 1)
    Usage(argv[0]);
  DiskFiles::Init();
  GameInfo::Initialize();

  unique_ptr<ActionSetting> ba(new ActionSetting());

  ActionTBuilder *builder = NULL;
  builder = new ActionTBuilder(*ba);

  builder->Gen();
  builder->Output();
   
  delete builder;
}
