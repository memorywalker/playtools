#ifndef FIREWALLRULES_H
#define FIREWALLRULES_H

#include <QString>
#include <QProcess>

class IFirewallActionListener
{
public:
    virtual void OnActionDone(QString& strOut) = 0;
};

class FirewallRules
{
public:
    FirewallRules();
    ~FirewallRules();

    void SetActionListener(IFirewallActionListener* listener);

    void SetFireWallRules();
    void RemoveFireWallRules();
    void StartSinglePublicSession();
    void StopSinglePublicSession();

    void StartProcessOffline(QString& processName);
    void StopProcessOffine();

private:
    bool RunFirewallCmd(QString& strCmd);
private:
    QProcess m_QProcess;
    IFirewallActionListener* m_pListener;
};

#endif // FIREWALLRULES_H
