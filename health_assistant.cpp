#include <iostream>
#include <string>
#include <array>

using namespace std;
// I have ADHD so I thought it would be fun to make a small program on it.
// Sources:
// https://www.mayoclinic.org/diseases-conditions/adult-adhd/symptoms-causes/syc-20350878
// https://cdc.gov/adhd/index.html 
// https://www.nimh.nih.gov/health/topics/attention-deficit-hyperactivity-disorder-adhd 

// Method to both get and check the user's input
int getValidatedChoice() {
    int choice;
    do {
        cout << "Your answer (1=Rarely or Never, 2=Sometimes, 3=Often or Always): ";
        cin >> choice;
    } while (choice != 1 && choice != 2 && choice != 3);
    return choice;
}

int main() {
    // Question Variable
    array<string, 10> items = {
        "1) I have trouble keeping my attention on tasks or conversations.",
        "2) I am easily distracted by noises, notifications, and my own thoughts.",
        "3) I often start tasks but struggle to finish them.",
        "4) I frequently misplace important items (keys, ID, assignments, etc.).",
        "5) I have difficulty organizing tasks or managing steps in a project.",
        "6) I procrastinate or avoid tasks that require continuous mental effort.",
        "7) I act impulsively (speaking/acting before thinking, interrupting others in conversations) more than I’d like.",
        "8) I feel restless when I’m expected to sit still.",
        "9) I lose track of time or underestimate how long activities will take.",
        "10) I find it hard to follow routines or maintain consistent habits."
    };
    // Recommendation Variable
    array<string, 5> tips;
    // Output Variables
    string level, interpretation;

    // Scoring variables
    int total = 0, minScore = 10, maxScore = 30;
    double normalized100;
    // Likert legend
    cout << "Scale:\n  1 = Rarely/Never\n  2 = Sometimes\n  3 = Often/Always\n\n";
    // Introduction
    const char* intro =
        "=============================================\n"
        "  Virtual Health Assistant: ADHD Self-Check\n"
        "=============================================\n\n"
        "Purpose:\n"
        "  This short questionnaire screens for common ADHD-related challenges\n"
        "  (attention, organization, impulsivity, restlessness, time management).\n"
        "Instructions:\n"
        "  For each statement, answer how it applies to you:\n"
        "    1 = Rarely/Never,  2 = Sometimes,  3 = Often/Always\n\n";
    cout << intro;
    // Questions loop using the getValidatedChoice() method
    // Achieved this idea with help from ChatGPT-5. Specifically, on how to utilize a loop to iterate through an array variable.
    for (const auto& q : items) {
        cout << q << "\n";
        int ans = getValidatedChoice();
        total += ans;
        cout << "\n";
    }

    // Sum range: 10..30; higher = more frequent challenges
    normalized100 = (static_cast<double>(total - minScore) / (maxScore - minScore)) * 100.0;
    if (normalized100 < 0) normalized100 = 0;
    if (normalized100 > 100) normalized100 = 100;



    if (total <= 15) {
        level = "Low ADHD Symptom Burden";
        interpretation = "You report relatively few ADHD-like challenges in day-to-day functioning.";
        tips = {
            "Keep what works: simple routines, a single to-do list, and a regular sleep schedule.",
            "Use basic distraction controls (silent mode, notification batching)."
        };
    } else if (total <= 22) {
        level = "Moderate ADHD Symptom Burden";
        interpretation = "You report noticeable challenges that sometimes affect productivity and well-being.";
        tips = {
            "Try to schedule the hardest tasks earliest.",
            "Break tasks into tiny steps; define the 'first 2 minutes' action for each.",
            "Reduce friction: prepare your workspace the night before (applications, files)."
        };
    } else {
        level = "High ADHD Symptom Burden";
        interpretation = "You report frequent challenges that may significantly impact daily life.";
        tips = {
            "Consider a professional evaluation (e.g., primary care or mental health specialist).",
            "You should attempt to look into evidence-based strategies in managing ADHD such as behavioral therapy and medication.",
            "Structure your day: consistent wake/sleep, anchored routine blocks, meal/exercise times.",
            "Use easy-access tools: phone reminders, app/site blockers during focus windows.",
            "If applicable, discuss evidence-based treatments with a clinician."
        };
    }



    // Results output
    cout << "---------------\n";
    cout << "Results\n";
    cout << "---------------\n";
    cout << "Raw score (10–30): " << total << "\n";
    cout << "Symptom index (0–100): " << static_cast<int>(normalized100) << "\n";
    cout << "Classification: " << level << "\n";
    cout << "Interpretation: " << interpretation << "\n\n";

    cout << "Personalized Recommendations:\n";
    for (const auto& t : tips) {
        cout << " • " << t << "\n";
    }
    return 0;
}
