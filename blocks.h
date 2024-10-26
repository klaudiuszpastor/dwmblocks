//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",      "~/.dotfiles/scripts/weather_status.sh",   600,       13},
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"",       "~/.dotfiles/scripts/system_status.sh",     5,        0},
	{"",      "~/.dotfiles/scripts/volume_status.sh",    5,        10},
 	{"", "$HOME/.dotfiles/scripts/battery_status.sh",   			 1,          0}, 
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{"",      "$HOME/.dotfiles/scripts/internet_status.sh",   10,       0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

