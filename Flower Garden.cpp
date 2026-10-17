
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "====================================\n";
    cout << "        🌸 FLOWER GARDEN 🌸      \n";
    cout << "====================================\n";
    cout << "1. 🌹 Rose\n";
    cout << "2. 🌺 Carnation\n";
    cout << "3. 🌷 Tulip\n";
    cout << "4. 🌻 Sunflower\n";
    cout << "5. 🪷 Lily\n";
    cout << "6. 🌼 Daisy\n";
    cout << "7. 🚪 Exit\n";

    cout << "\nChoose a flower (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n🌹 ROSE 🌹\n";
            cout << "Roses symbolize love, romance, and appreciation.\n";
            break;

        case 2:
            cout << "\n🌺 CARNATION 🌺\n";
            cout << "Carnations have ruffled petals and symbolize love, admiration, and remembrance.\n";
            break;

        case 3:
            cout << "\n🌷 TULIP 🌷\n";
            cout << "Tulips are colorful, cup-shaped flowers that symbolize love and new beginnings.\n";
            break;

        case 4:
            cout << "\n🌻 SUNFLOWER 🌻\n";
            cout << "Sunflowers have bright yellow petals and symbolize happiness, warmth, and positivity.\n";
            break;

        case 5:
            cout << "\n🪷 LILY 🪷\n";
            cout << "Lilies are elegant flowers often associated with purity and renewal.\n";
            break;

        case 6:
            cout << "\n🌼 DAISY 🌼\n";
            cout << "Daisies have simple petals and symbolize innocence, cheerfulness, and new beginnings.\n";
            break;

        case 7:
            cout << "\n🌸 Thank you for visiting! Have a blooming day! 🌸\n";
            break;

        default:
            cout << "\n❌ Invalid choice! Please select from 1 to 7.\n";
    }

    return 0;
}
