char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    do{
        std::cout << "Do one of the following: \n";
        std::cout << " r for rock \n";
        std::cout << " p for paper \n";
        std::cout << " s for scissors \n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
