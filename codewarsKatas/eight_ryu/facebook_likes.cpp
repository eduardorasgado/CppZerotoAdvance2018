std::string likes(const std::vector<std::string> &names)
{
    int l_names = names.size();
    std::string phrase;
    if(l_names == 0) { phrase = "no one likes this"; } 
    else if(l_names == 1) { phrase = names[0]+" likes this"; }
    else if(l_names == 2) { phrase = names[0]+" and "+names[1]+" like this"; }
    else if(l_names == 3) { 
      phrase = names[0]+", "+names[1]+" and "+names[2]+" like this";
    }
    else {
      phrase = names[0]+", "+names[1]+" and "+std::to_string(l_names - 2)+" others like this";
    }
    return phrase; // Do your magic!
}