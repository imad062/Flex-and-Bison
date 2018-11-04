red=`tput setaf 1`
green=`tput setaf 2`
blue=`tput setaf 4`
reset=`tput sgr0`

file=$1
filename=${file%.*}

if [ -z $filename ]
then
    #echo "${red}No file provided in command argument. ${reset}"
    #echo "${red}Enter ${green}./build-flex.sh filename.l${red} in the command prompt${reset}" 
    echo "${blue}Please enter filename with extension: ${reset}"
    read file

    filename=${file%.*}
    echo "Filename: ${green}$filename${reset}"

    `flex $file`

    if `gcc lex.yy.c -o $filename`
    then
	echo "Executable file: ${green}$filename${reset} created"
	echo "Run the Executable file with ${green}./$filename${reset} command"
    else
	echo "${red}ERROR: Couldn't build file${reset}"
    fi

else
    echo "Filename: ${green}$filename${reset}"

    `flex $file`

    if `gcc lex.yy.c -o $filename`
    then
	echo "Executable file: ${green}$filename${reset} created"
	echo "Run the Executable file with ${green}./$filename${reset} command"
    else
	echo "${red}ERROR: Couldn't build file${reset}"
    fi
fi