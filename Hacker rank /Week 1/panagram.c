#include<stdio.h>
#include<ctype.h>

int main() {
char sentence[500];
int letters[26];
int i, ok = 1;

for (i = 0; i < 26; i++) {
letters[i] = 0;
}

fgets(sentence, sizeof(sentence), stdin);

for (i = 0; sentence[i] != '\0'; i++) {
char c = tolower(sentence[i]);
if (c >= 'a' && c <= 'z') {
letters[c - 'a'] = 1;
}
}

for (i = 0; i < 26; i++) {
if (letters[i] == 0) {
ok = 0;
break;
}
}

if (ok == 1) {
printf("pangram\n");
} else {
printf("not pangram\n");
}

return 0;
}