#ifndef HEBIROS_SERVICES_GAZEBO_H
#define HEBIROS_SERVICES_GAZEBO_H

#include "ros/ros.h"

#include "hebiros_services.h"


class HebirosServicesGazebo : public HebirosServices {

  public:

    void registerNodeServices();

    void registerGroupServices(std::string group_name);

    bool entryList(
      EntryListSrv::Request &req, EntryListSrv::Response &res);

    bool addGroup(
      AddGroupFromNamesSrv::Request &req, AddGroupFromNamesSrv::Response &res,
      std::map<std::string, std::string> joint_full_names);

    bool addGroupFromNames(
      AddGroupFromNamesSrv::Request &req, AddGroupFromNamesSrv::Response &res);

    bool addGroupFromURDF(
      AddGroupFromURDFSrv::Request &req, AddGroupFromURDFSrv::Response &res);

    bool size(
      SizeSrv::Request &req, SizeSrv::Response &res, std::string group_name);

    bool setFeedbackFrequency(
      SetFeedbackFrequencySrv::Request &req, SetFeedbackFrequencySrv::Response &res,
      std::string group_name);

    bool setCommandLifetime(
      SetCommandLifetimeSrv::Request &req, SetCommandLifetimeSrv::Response &res,
      std::string group_name);

    bool sendCommandWithAcknowledgement(
      SendCommandWithAcknowledgementSrv::Request &req, 
      SendCommandWithAcknowledgementSrv::Response &res, std::string group_name);

};

#endif