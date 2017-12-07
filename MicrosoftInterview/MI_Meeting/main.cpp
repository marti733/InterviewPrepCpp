/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <vector>

using namespace std;

class Meeting
{
private:
        // number of 30 min blocks past 9:00 am
        unsigned int startTime_;
        unsigned int endTime_;

public:
    Meeting() :
        startTime_(0),
        endTime_(0)
    {
    }

    Meeting(unsigned int startTime, unsigned int endTime) :
        startTime_(startTime),
        endTime_(endTime)
    {
    }

    unsigned int getStartTime() const
    {
        return startTime_;
    }

    void setStartTime(unsigned int startTime)
    {
        startTime_ = startTime;
    }

    unsigned int getEndTime() const
    {
        return endTime_;
    }

    void setEndTime(unsigned int endTime)
    {
        endTime_ = endTime;
    }

    bool operator==(const Meeting& other) const
    {
        return
            startTime_ == other.startTime_
            && endTime_ == other.endTime_;
    }

    bool meetingComparisonFunction(
        const Meeting& firstMeeting,
        const Meeting& secondMeeting)
    {
        return firstMeeting.getStartTime() < secondMeeting.getStartTime();
    }

    vector<Meeting> mergeRanges(const vector<Meeting>& meetings)
    {
        // sort by start time
        vector<Meeting> sortedMeetings(meetings);
        sort(sortedMeetings.begin(), sortedMeetings.end(), meetingComparisonFunction());

        // initialize mergedMeetings with the earliest meeting
        vector<Meeting> mergedMeetings;
        mergedMeetings.push_back(sortedMeetings.front());

        for (const Meeting& currentMeeting : sortedMeetings) {

            Meeting& lastMergedMeeting = mergedMeetings.back();

            // if the current and last meetings overlap, use the latest end time
            if (currentMeeting.getStartTime()
                <= lastMergedMeeting.getEndTime()) {
                lastMergedMeeting.setEndTime(max(lastMergedMeeting.getEndTime(),
                    currentMeeting.getEndTime()));
            }
            else {
                // add the current meeting since it doesn't overlap
                mergedMeetings.push_back(currentMeeting);
            }
        }

        return mergedMeetings;
    }

};

int main(int argc, char ** argv) {
		vector<Meeting> meetings = {Meeting(1, 2), Meeting(3, 4), Meeting(6, 8)};

		Meeting s;
		vector<Meeting> merged = s.mergeRanges(meetings);

		Meeting currMeeting;
		for(const Meeting& currMeeting : merged){
			std::cout << currMeeting.getStartTime() << " " << currMeeting.getEndTime() << std::endl;
		}

		return 0;
}



