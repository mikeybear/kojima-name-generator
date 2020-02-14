#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;

string dummy, condition_condition_type;
string entry2_1, entry2_2, entry2_3, entry2_4, entry2_5;
string entry2_6, entry2_7, entry2_8, entry2_9, entry2_10;
string entry2_11, entry2_12, entry2_13, entry2_14, entry2_15;
string entry3_16, entry3_17, entry3_18, entry3_19, entry3_20, entry3_21;
string name_category, final_name, first_name, last_name, lick, result;

bool alternate_names, man_condition, condition_condition, clone_condition;
bool normal, occupation, horny, the, cool, violent, subtext;
int resultDice;
int nameCount;

int rollDice(int max){
	srand(time(0));
	return (rand() % max) + 1;
}

string getNormalName(){
    cout << "Determining your NORMAL NAME..." << endl;
    result = entry2_1;
    if (man_condition == true){ result = result + "man"; }
    if (condition_condition == true){ result = condition_condition_type + " " + result; }
    return result;
}

string getOccupationName(){
    last_name = entry2_2;
    cout << "Determining your OCCUPATION NAME..." << endl;
    cout << "Press enter to roll the dice to determine your first name.";
    getline(cin, dummy);
    resultDice = rollDice(4);
	/*
    if (resultDice == 1){ first_name = entry2_15; }
    else if (resultDice == 2){ first_name = entry2_6; }
    else if (resultDice == 3){ first_name = entry2_13; }
    else if (resultDice == 4){ first_name = entry3_16; }
	*/
	switch (resultDice) {
		case 1:
			first_name = entry2_15;
			break;
		case 2:
			first_name = entry2_6;
			break;
		case 3:
			first_name = entry2_13;
			break;
		case 4:
			first_name = entry3_16;
			break;
		default:
			break;
	}
    if (man_condition == true){ last_name = last_name + "man"; }
    if (condition_condition == true){ first_name = condition_condition_type + " " + first_name; }
    result = first_name + " " + last_name;
    return result;
}

string getHornyName(){
    last_name = entry2_3;
    cout << "Determining your HORNY NAME..." << endl;
    cout << "Press enter to roll the dice to determine your first name.";
    getline(cin, dummy);
    resultDice = rollDice(4);
	/*
    if (resultDice == 1){ first_name = entry2_12; }
    else if (resultDice == 2){ first_name = "Naked"; }
    else if (resultDice == 3){ first_name = entry2_6; }
    else if (resultDice == 4){ first_name = entry2_14; }
	*/
	switch (resultDice) {
		case 1:
			first_name = entry2_12;
			break;
		case 2:
			first_name = "Naked";
			break;
		case 3:
			first_name = entry2_6;
			break;
		case 4:
			first_name = entry2_14;
			break;
		default:
			break;
	}
    cout << "If you feel like it, your middle name can be 'Lickable'. I won't stop you." << endl;
    cout << "Type 'ok' or 'no god please no'." << endl;
    getline(cin, lick);
    if (lick == "ok"){ lick = " 'Lickable' "; }
    else{ lick = " "; }
    if (man_condition == true){ last_name = last_name + "man"; }
    if (condition_condition == true){ first_name = condition_condition_type + " " + first_name; }
    result = first_name + lick + last_name;
    return result;
}

string getTheName(){
    first_name = "The";
    cout << "Determining your THE NAME..." << endl;
    cout << "Press enter to roll the dice to determine your last name.";
    getline(cin, dummy);
    resultDice = rollDice(4);
	/*
    if (resultDice == 1){ last_name = entry2_8; }
    else if (resultDice == 2){ last_name = entry2_9; }
    else if (resultDice == 3){ last_name = entry2_4; }
    else if (resultDice == 4){ last_name = entry3_20; }
	*/
	switch (resultDice) {
		case 1:
			last_name = entry2_8;
			break;
		case 2:
			last_name = entry2_9;
			break;
		case 3:
			last_name = entry2_4;
			break;
		case 4:
			last_name = entry3_20;
			break;
		default:
			break;
	}
    if (man_condition == true){ last_name = last_name + "man"; }
    if (condition_condition == true){ first_name = first_name + " " + condition_condition_type; }
    result = first_name + " " + last_name;
    return result;
}

string getCoolName(){
    first_name = entry3_21;
    cout << "Determining your COOL NAME..." << endl;
    cout << "Press enter to roll the dice to determine your last name.";
    getline(cin, dummy);
    resultDice = rollDice(6);
	/*
    if (resultDice == 1){ last_name = entry3_17; }
    else if (resultDice == 2){ last_name = entry3_18; }
    else if (resultDice == 3){ last_name = entry3_19; }
    else if (resultDice == 4){ last_name = entry2_6; }
    else if (resultDice == 5){ last_name = entry2_8; }
    else if (resultDice == 6){ last_name = entry2_13; }
	*/
	switch (resultDice) {
		case 1:
			last_name = entry3_17;
			break;
		case 2:
			last_name = entry3_18;
			break;
		case 3:
			last_name = entry3_19;
			break;
		case 4:
			last_name = entry2_6;
			break;
		case 5:
			last_name = entry2_8;
			break;
		case 6:
			last_name = entry2_13;
			break;
		default:
			break;
	}
    if (man_condition == true){ last_name = last_name + "man"; }
    if (condition_condition == true){ first_name = condition_condition_type + " " + first_name; }
    result = first_name + " " + last_name;
    return result;
}

string getViolentName(){
    last_name = entry2_5;
    cout << "Determining your VIOLENT NAME..." << endl;
    cout << "Press enter to roll the dice to determine your first name.";
    getline(cin, dummy);
    resultDice = rollDice(4);
	/*
    if (resultDice == 1){ first_name = entry3_19; }
    else if (resultDice == 2){ first_name = entry2_12; }
    else if (resultDice == 3){ first_name = entry3_20; }
    else if (resultDice == 4){ first_name = entry2_9; }
	*/
	switch (resultDice) {
		case 1:
			first_name = entry3_19;
			break;
		case 2:
			first_name = entry2_12;
			break;
		case 3:
			first_name = entry3_20;
			break;
		case 4:
			first_name = entry2_9;
			break;
		default:
			break;
	}
    if (man_condition == true){ last_name = last_name + "man"; }
    if (condition_condition == true){ first_name = condition_condition_type + " " + first_name; }
    result = first_name + " " + last_name;
    return result;
}

string getSubtextName(){
    cout << "Determining your NAME THAT LACKS SUBEXT..." << endl;
    result = entry2_10;
    if (man_condition == true){ result = result + "man"; }
    if (condition_condition == true){ result = condition_condition_type + " " + result; }
    return result;
}

void getManCondition(){
    cout << "Press enter to roll the dice to determine your -man condition.";
    getline(cin, dummy);
    
    resultDice = rollDice(4);
    if (resultDice < 4){
        man_condition = false;
        cout << "You do not have the -man condition." << endl << endl;
    }
    else if (resultDice == 4){
        man_condition = true;
        cout << "You do have the -man condition." << endl << endl;
    }
}

void getConditionCondition(){
    cout << "Press enter to roll the dice to determine your condition condition.";
    getline(cin, dummy);
    
    resultDice = rollDice(8);
    if (resultDice < 6){
        condition_condition = false;
        cout << "You do not have the condition condition." << endl << endl;
    }
    else if (resultDice == 6){
        condition_condition = true;
        condition_condition_type = "Big";
        cout << "You're big. You have the 'Big' condition." << endl << endl;
    }
    else if (resultDice == 7){
        condition_condition = true;
        condition_condition_type = "Old";
        cout << "You are older than you once were. You have the 'Old' condition." << endl << endl;
    }
    else if (resultDice == 8){
        condition_condition = true;
        condition_condition_type = entry2_11;
        cout << "You are how you currently are. You have the " << entry2_11 << " condition." << endl << endl;
    }
}

void getCloneCondition(){
    cout << "Press enter to roll the dice to determine your clone condition.";
    getline(cin, dummy);
    
    resultDice = rollDice(12);
    if (resultDice < 12){
        clone_condition = false;
        cout << "You do not have the clone condition." << endl << endl;
    }
    else if (resultDice == 12){
        clone_condition = true;
        cout << "You have the clone condition. You are a clone of someone else, or you have been brainwashed into becoming a mental doppelganger of someone else. Find someone who has completed this questionnaire and replace 50 percent of your Kojima name with 50 percent of their Kojima name." << endl << endl;
    }
}

void getAllConditions(){
    getManCondition();
    getConditionCondition();
    getCloneCondition();
}

void getNameCategory(){
    cout << "Press enter to roll the dice to determine your name category.";
    getline(cin, dummy);
    
    resultDice = rollDice(20);
    
    if (resultDice == 1){
        normal = true;
        name_category = "NORMAL";
    }
    else if (resultDice >= 2 && resultDice <= 6){
        occupation = true;
        name_category = "OCCUPATIONAL";
    }
    else if (resultDice >= 7 && resultDice <= 10){
        horny = true;
        name_category = "HORNY";
    }
    else if (resultDice >= 11 && resultDice <= 13){
        the = true;
        name_category = "THE";
    }
    else if (resultDice >= 14 && resultDice <= 17){
        cool = true;
        name_category = "COOL";
    }
    else if (resultDice == 18 || resultDice == 19){
        violent = true;
        name_category = "VIOLENT";
    }
    else if (resultDice == 20){
        subtext = true;
        name_category = "NAME THAT LACKS SUBTEXT.";
    }
    if (subtext != true){
        cout << "You have a " << name_category << " NAME." << endl << endl;
    }
    else{
        cout << "You have a " << name_category << endl << endl;
    }
}

int main(){
	// DETERMINING HOW MANY NAMES YOU HAVE
    cout << endl << "Press enter to roll the dice to determine how many names you have." << endl;
	getline(cin, dummy);

	resultDice = rollDice(6);
	if (resultDice < 6){
		cout << "You have one name. You will only go through this questionnaire once." << endl;
		alternate_names = false; 
	}
	else{
		cout << "You have one name + 6 other alternate names. You will go through this questionnaire six more times. You're gonna be here a while." << endl;
		alternate_names = true;
	}

	// PERSONAL INFORMATION
	
	cout << "What is your full name?" << endl;
	getline(cin, entry2_1);

	cout << "What do you do at your occupation? (condense to a single '-er' noun)" << endl;
	getline(cin, entry2_2);

	cout << "What was your first pet's specfic species/breed? If you never had a pet, please answer with an animal you wish you owned." << endl;
	getline(cin, entry2_3);

	cout << "Think of the most embarassing childhood memory you have had. Condense that memory down to two words." << endl;
	getline(cin, entry2_4);

	cout << "What is the object you would least like to be stabbed by?" << endl;
	getline(cin, entry2_5);

	cout << "What is something you are good at? (verb ending in '-ing')" << endl;
	getline(cin, entry2_6);

	cout << "How many carrots do you believe you could eat in one sitting, if someone, like, forced you to eat as many carrots as possible?" << endl;
	getline(cin, entry2_7);

	cout << "What is your greatest intangible fear? (e.g. death, loneliness, fear itself)" << endl;
	getline(cin, entry2_8);

	cout << "What is your greatest tangible fear?" << endl;
	getline(cin, entry2_9);

	cout << "What is the last thing you did before starting this questionnaire?" << endl;
	getline(cin, entry2_10);

	cout << "What condition is your body currently in? (single word answer)" << endl;
	getline(cin, entry2_11);

	cout << "Favorite state of matter?" << endl;
	getline(cin, entry2_12);

	cout << "A word your name kind of sounds like? (e.g. Jenny -> Penny)" << endl;
	getline(cin, entry2_13);

	cout << "What is your Zodiac sign?" << endl;
	getline(cin, entry2_14);

	cout << "If you had to define your personality in one word, what would it be?" << endl;
	getline(cin, entry2_15);

	// KOJIMA INFORMATION

	cout << "Who is your favorite film character? (NOTE: must be played by Kurt Russell)" << endl;
	getline(cin, entry3_16);

	cout << "What is the last word of the title of your favorite Kubrick film?" << endl;
	getline(cin, entry3_17);

	cout << "What is the first word in the title of your favorite Joy Division album?" << endl;
	getline(cin, entry3_18);

	cout << "What is a scientific term you picked up from listening to NPR once?" << endl;
	getline(cin, entry3_19);

	cout << "What is a piece of military hardware you think looks cool even though war is bad?" << endl;
	getline(cin, entry3_20);

	cout << "What is something you would enjoy watching Mads Mikkelsen do? Please condense into one word." << endl;
	getline(cin, entry3_21);

	// NAME CONDITIONS

    getAllConditions();

	cout << "Press enter to roll the dice to determine your Kojima condition.";
	getline(cin, dummy);

    resultDice = rollDice(100);
	if (resultDice != 69){ cout << "You do not have the Kojima condition." << endl << endl; }
	else if (resultDice == 69){
		cout << "Oh no. You are Hideo Kojima. Hideo Kojima created you and is also you. You are the man who created himself and there is nothing you can do about it. You're in Kojima's work--your world--and that's just the breaks, pal. Stop this questionnaire now. You're Hideo Kojima. Go do the things that Hideo Kojima does." << endl << endl;
		return 0;
	}

	// DETERMINING YOUR NAME CATEGORY
    
    getNameCategory();

	// GENERATING YOUR KOJIMA NAME

	if (normal == true){
        final_name = getNormalName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getOccupationName();
            cout << "Your OCCUPATIONAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getHornyName();
            cout << "Your HORNY NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your THE NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getCoolName();
            cout << "Your COOL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getViolentName();
            cout << "Your VIOLENT NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getSubtextName();
            cout << "Your NAME THAT LACKS SUBTEXT is " << final_name << endl << endl;
        }
	}
	else if (occupation == true){
		final_name = getOccupationName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getNormalName();
            cout << "Your NORMAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getHornyName();
            cout << "Your HORNY NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your THE NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getCoolName();
            cout << "Your COOL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getViolentName();
            cout << "Your VIOLENT NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getSubtextName();
            cout << "Your NAME THAT LACKS SUBTEXT is " << final_name << endl << endl;
        }
	}
	else if (horny == true){
		final_name = getHornyName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getNormalName();
            cout << "Your NORMAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getOccupationName();
            cout << "Your OCCUPATIONAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your THE NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getCoolName();
            cout << "Your COOL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getViolentName();
            cout << "Your VIOLENT NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getSubtextName();
            cout << "Your NAME THAT LACKS SUBTEXT is " << final_name << endl << endl;
        }
	}
	else if (the == true){
        final_name = getTheName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getNormalName();
            cout << "Your NORMAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getOccupationName();
            cout << "Your OCCUPATIONAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getHornyName();
            cout << "Your HORNY NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getCoolName();
            cout << "Your COOL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getViolentName();
            cout << "Your VIOLENT NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getSubtextName();
            cout << "Your NAME THAT LACKS SUBTEXT is " << final_name << endl << endl;
        }
	}
	else if (cool == true){
        final_name = getCoolName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getNormalName();
            cout << "Your NORMAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getOccupationName();
            cout << "Your OCCUPATIONAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getHornyName();
            cout << "Your HORNY NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your THE NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getViolentName();
            cout << "Your VIOLENT NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getSubtextName();
            cout << "Your NAME THAT LACKS SUBTEXT is " << final_name << endl << endl;
        }
	}
	else if (violent == true){
        final_name = getViolentName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getNormalName();
            cout << "Your NORMAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getOccupationName();
            cout << "Your OCCUPATIONAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your HORNY NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your THE NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getCoolName();
            cout << "Your COOL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getSubtextName();
            cout << "Your NAME THAT LACKS SUBTEXT is " << final_name << endl << endl;
        }
	}
	else if (subtext == true){
        final_name = getSubtextName();
        if (alternate_names == true){
            cout << "Your Kojima name is " << final_name << endl << endl;
            cout << "It's time to determine your 6 alternate names." << endl;
            getAllConditions();
            final_name = getNormalName();
            cout << "Your NORMAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getOccupationName();
            cout << "Your OCCUPATIONAL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your HORNY NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getTheName();
            cout << "Your THE NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getCoolName();
            cout << "Your COOL NAME is " << final_name << endl << endl;
            getAllConditions();
            final_name = getViolentName();
            cout << "Your VIOLENT NAME is " << final_name << endl << endl;
        }
	}
    if (alternate_names == false){ cout << "Your Kojima name is " << final_name << endl << endl; }
	cout << "Congratulations. You have completed the Kojima name generator." << endl << endl;

	return 0;
}
