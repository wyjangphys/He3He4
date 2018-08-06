#include <iostream>
#include <TTree.h>
#include <TChain.h>
#include <TStopwatch.h>

#include "KNUTreeMC.h"

int main(int argc, char* argv[])
{
  TStopwatch clock;
  clock.Start(kTRUE);
	TChain chain("KNUTreeMC");

	chain.Add(argv[1]);
	TTree *tree = &chain;
	if( tree == NULL )
  {
    std::cout << "failed to access file" << std::endl;
    return -1;
  }

	KNUTreeMC t(tree);
	t.Loop();
  TString outputFileName = argv[2];
  t.Write(outputFileName);

  clock.Stop();
  clock.Print();
	return 0;
}
