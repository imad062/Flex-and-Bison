red=`tput setaf 1`
green=`tput setaf 2`
blue=`tput setaf 4`
reset=`tput sgr0`

echo "Press: "
echo "1 for creating C compatible template. "
echo "2 for creating C++ compatible template. "
echo "Input: "
read input

if [ $input -eq 1 ]
then
    echo "Creating C compatible template files..."
    echo "${blue}Enter filename witout extension: ${reset}"
    read filename

    echo "Entered filename: ${green}$filename${reset}"

    flexfile=$filename".l"
    bisonfile=$filename".y"
    bisontab=$filename".tab.h"

    `touch $flexfile`
    `touch $bisonfile`
    
    
else if [ $input -eq 2 ]
then
    echo "Creating C++ compatible template files..."
    echo "${blue}Enter filename witout extension: ${reset}"
    read filename

    echo "Entered filename: ${green}$filename${reset}"

    flexfile=$filename".l"
    bisonfile=$filename".y"
    bisontab=$filename".tab.h"
else
    echo "${red}ERROR:${reset} Input not recognized. Only ${blue}1${reset} and ${blue}2${reset} are valid inputs. "
fi