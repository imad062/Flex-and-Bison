red=`tput setaf 1`
green=`tput setaf 2`
blue=`tput setaf 4`
reset=`tput sgr0`

flexfile=$1".l"
bisonfile=$1".y"
filename=${flexfile%.*}
bisonout=$1".tab.c"

echo $flexfile
echo $bisonfile

if [ -z $filename ]
then
    #echo "${red}No file provided in command argument.${reset}"
    echo "${blue}Please make sure your flex and bison file has same filename." 
    echo "Enter filename without extension: ${reset}"
    read filename
    echo "Filename: ${green}$filename${reset}"

    flexfile=$filename".l"
    bisonfile=$filename".y"
    bisonout=$filename".tab.c"

    if `bison -d $bisonfile`
    then
        echo "${green}Bison build successful. ${reset}"
        if `flex $flexfile`
        then
            echo "${green}Flex build successful. ${reset}"
            if `gcc lex.yy.c $bisonout -o $filename`
            then
                echo "${green}GCC build successful. ${reset}"
                echo "Run the file with ${green}./$filename${reset} command."
            else
                echo "${red}ERROR: GCC build failed. ${reset}"
            fi
        else
            echo "${red}ERROR: Flex build failed. ${reset}"
        fi
    else
        echo "${red}Bison build failed. ${reset}"
    fi
else
    if `bison -d $bisonfile`
    then
        echo "${green}Bison build successful. ${reset}"
        if `flex $flexfile`
        then
            echo "${green}Flex build successful. ${reset}"
            if `gcc lex.yy.c $bisonout -o $filename`
            then
                echo "${green}GCC build successful. ${reset}"
                echo "Run the file with ${green}./$filename${reset} command."
            else
                echo "${red}ERROR: GCC build failed. ${reset}"
            fi
        else
            echo "${red}ERROR: Flex build failed. ${reset}"
        fi
    else
        echo "${red}Bison build failed. ${reset}"
    fi
fi