private["_titel","_message"];

_titel = param [0,"",[""]];
_message = param [1,"",[""]];

_hint = parseText format ["<t color='#ffff00'>%1</t><br/><br/><t color='#FFFFFF'>%2</t>", _titel,_message];

hint _hint; 