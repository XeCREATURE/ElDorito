#pragma once

#include "ElModule.h"
#include <inttypes.h>

#include "../Patch.h"

class DirectConnect : public ElModule
{
public:
	DirectConnect();
	~DirectConnect();

	void Tick(const std::chrono::duration<double>& Delta);

	// Return true on success
	bool Run(const std::vector<std::string>& Arguments);

	// Command and usage info
	std::string Info(const std::string& Topic = "") const;

	// Suggest auto-complete strings for arguments
	std::string Suggest(const std::vector<std::string>& Arguments) const;

	void PreferencesChanged();

private:
	BYTE syslinkData[0x176];
};