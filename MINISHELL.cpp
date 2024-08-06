#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <windows.h>
#include <direct.h>

using namespace std;

void parseCommand(const string &input, vector<string> &args, bool &background) {
    stringstream ss(input);
    string token;
    args.clear();
    background = false;

    while (ss >> token) {
        if (token == "&") {
            background = true;
        } else {
            args.push_back(token);
        }
    }
}

void changeDirectory(const vector<string> &args) {
    if (args.size() < 2) {
        cerr << "cd: expected argument" << endl;
    } else {
        if (_chdir(args[1].c_str()) != 0) {
            perror("cd failed");
        }
    }
}

void executeCommand(const vector<string> &args, bool background) {
    string command = args[0];
    for (size_t i = 1; i < args.size(); ++i) {
        command += " " + args[i];
    }

    if (background) {
        command += " &";
    }

    system(command.c_str());
}

int main() {
    string input;
    vector<string> args;
    bool background;

    while (true) {
        cout << "mini-shell> ";
        getline(cin, input);

        parseCommand(input, args, background);

        if (args.empty()) {
            continue;
        }

        if (args[0] == "exit") {
            break;
        } else if (args[0] == "cd") {
            changeDirectory(args);
        } else {
            executeCommand(args, background);
        }
    }

    return 0;
}
