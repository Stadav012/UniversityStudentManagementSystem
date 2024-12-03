#pragma once
#include <iostream>
#include <string>
#include <ctime> // Include for std::tm
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <cliext/list>
#include <cliext/vector>
#include<windows.h>
#include <Servprov.h> // for IServiceProvider

using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;


public ref class DatabaseHelper {
private:
    String^ connectionString;

public:
    DatabaseHelper() {
        // Initialize the connection string
        connectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi";
    }

    // Overloaded GetData: Without parameters
    DataTable^ GetData(String^ query) {
        return GetData(query, nullptr); // Call the parameterized version with null
    }

    // Overloaded GetData: With parameters
    DataTable^ GetData(String^ query, cli::array<MySqlParameter^>^ parameters) {
        MySqlConnection^ sqlConn = gcnew MySqlConnection(connectionString);
        try {
            sqlConn->Open();
            MySqlCommand^ sqlCmd = gcnew MySqlCommand(query, sqlConn);

            if (parameters != nullptr) {
                sqlCmd->Parameters->AddRange(parameters);
            }

            MySqlDataAdapter^ sqlDa = gcnew MySqlDataAdapter(sqlCmd);
            DataTable^ dataTable = gcnew DataTable();
            sqlDa->Fill(dataTable);

            return dataTable;
        }
        catch (Exception^ ex) {
            throw gcnew InvalidOperationException("Database operation failed: " + ex->Message);
        }
        finally {
            sqlConn->Close();
        }
    }

    // Overloaded ExecuteQuery: Without parameters
    void ExecuteQuery(String^ query) {
        ExecuteQuery(query, nullptr); // Call the parameterized version with null
    }

    // Overloaded ExecuteQuery: With parameters
    void ExecuteQuery(String^ query, cli::array<MySqlParameter^>^ parameters) {
        MySqlConnection^ sqlConn = gcnew MySqlConnection(connectionString);
        try {
            sqlConn->Open();
            MySqlCommand^ sqlCmd = gcnew MySqlCommand(query, sqlConn);

            if (parameters != nullptr) {
                sqlCmd->Parameters->AddRange(parameters);
            }

            sqlCmd->ExecuteNonQuery();
        }
        catch (Exception^ ex) {
            throw gcnew InvalidOperationException("Database operation failed: " + ex->Message);
        }
        finally {
            sqlConn->Close();
        }
    }
};
