#Delets every file except *.l, *.y, *.md, and *.sh files

red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`

for file in `ls`
do
    filename=${file%.*}
    extension=${file#*.}
	
	if [ $extension = 'sh' ]
		then
	        echo "${green}Ignored Bash Script: $filename${reset}"
	elif [ $extension = 'l' ]
		then 
	        echo "${green}Ignored Flex Input File: $filename${reset}"
	elif [ $extension = 'y' ]
		then
	    	echo "${green}Ignored Bison Input File: $filename${reset}"
	elif [ $extension = 'md' ]
		then 
			echo "${green}Ignored Text File: $filename${reset}"
	else
		echo "${red}Deleted: $file${reset}"
	    `rm $file`
	fi
done
