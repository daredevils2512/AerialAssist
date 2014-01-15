#ifndef DRIVECOMMAND_H
#define DRIVECOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Henry
 */
class DriveCommand: public CommandBase {
public:
	DriveCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
private:
	static const bool LOW = true;
	static const bool HIGH = false;
		
	bool shifting;
	bool last;
	bool current;
};

#endif
